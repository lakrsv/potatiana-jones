using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public static class GameManager
{
    private static int _currentLevel = Application.loadedLevel;

    public static bool GameOver = false;

    public enum Secrets { Sunglasses, SecretIsland, LukasFace, PaulaHeart, RicStupid, VebKalashnikov, DuckFish};
    //Secrets
    private static List<Secrets> _activeSecrets = new List<Secrets>();

    private static List<Pickup.PickupType> _uniquePickupsEver = new List<Pickup.PickupType>();

    public static void StartNewGame()
    {
        _currentLevel = 1;
        GameOver = false;

        Application.LoadLevel(_currentLevel);
    }

    public static void RestartLevel()
    {
        _currentLevel = Application.loadedLevel;
        Application.LoadLevel(_currentLevel);
    }

    public static void NextLevel()
    {
        _currentLevel = Application.loadedLevel;

        _currentLevel++;
        GameOver = false;

        if (_currentLevel < Application.levelCount)
        {
            Application.LoadLevel(_currentLevel);
        }
        else
        {
            //No more levels, You win!
            //Temporary You win forever.

            var txt = (GameObject.FindGameObjectWithTag("ItemGetText")).GetComponent<UnityEngine.UI.Text>();
            txt.text = "That's it for the Ludum Dare entry! You're done!\n\nThank you for playing!";
            txt.GetComponent<Animator>().speed = 0.5f;
            txt.GetComponent<Animator>().SetTrigger("GetNewItem");
        }
    }

    public static void SelectLevel(int index)
    {
        _currentLevel = index;

        if(_currentLevel < Application.levelCount)
        {
            Application.LoadLevel(_currentLevel);
        }
    }

    public static void AddSecret(Secrets secret)
    {

        if (!_activeSecrets.Contains(secret))
        {
            _activeSecrets.Add(secret);

            AudioPlayer.PlayAudio(AudioPlayer.SoundType.SecretPickup);
        }
    }

    public static void InitializePlayer(PlayerController player)
    {
        AudioPlayer.PlayAudio(AudioPlayer.SoundType.Win);

        foreach(Secrets secret in _activeSecrets)
        {
            player.EnableSecret(secret);
        }
    }

    public static bool CheckIfHadPickup(Pickup.PickupType type)
    {
        if (_uniquePickupsEver.Contains(type)) { return true; }
        else { _uniquePickupsEver.Add(type); return false; }
    }
}
