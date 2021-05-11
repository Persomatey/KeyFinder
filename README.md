# Key Finder

*A Basic 2D Platformer*

https://persomatey.itch.io/key-finder

![Image of KF](https://raw.githubusercontent.com/Persomatey/KeyFinder/main/GraphicArt/KeyFinderGraphicArt-Website.png)

## Specs

Unreal Engine 4.25.4

SLN solution in Visual Studio Community 2019 Preview 
https://visualstudio.microsoft.com/vs/community/

Trello board: 
https://trello.com/b/rSKdAI03/project-praeter

## Credits 

**Programming**
- [Hunter Goodin](https://huntergoodin.com/)

**Art**
- [Hunter Goodin](https://huntergoodin.com/)
- [rvros](https://rvros.itch.io/)
- [Trixie](https://trixelized.itch.io/)
- [Comixtrash](https://comixtrash.itch.io/) 
- [kaleb-silva](https://www.freepik.com/kaleb-silva) 

**Animation**
- [rvros](https://rvros.itch.io/)

**Music**
- [VGcomposer](https://assetstore.unity.com/publishers/27795)

**SFX**
- [Hunter Goodin](https://huntergoodin.com/)
- [Chris M Audio](https://assetstore.unity.com/publishers/4861)
- [ZapSplat](https://www.zapsplat.com/)
- [VGcomposer](https://assetstore.unity.com/publishers/27795)
- [MGWSoundDesign](https://assetstore.unity.com/publishers/27115)
- [InspectorJ Sound Effects](https://assetstore.unity.com/publishers/38635) playerAttack1-2 or - [ShapeForms](https://assetstore.unity.com/publishers/40210)

## Changelist 

<details>
	<summary>CL-000007 (The Builds Update)</summary>

	- Made the following changes: 
		- Cleaned up the art for the level 
			- Added grass, etx 
		- Renamed the project 
			- Key Finder 
		- Changed the executable image to the graphic art 
		- Added a Graphic Art folder with the files for the graphic art for the game 
		- Edited the README to reflect the above changes 

</details>

<details>
	<summary>CL-000006 (The Audio Update)</summary>

	- Made the following changes: 
		- Created the end game conditions 
			- To win the game, the player has to do the following: 
				- Collect all 3 keys 
				- Once the player has all 3 keys, the player must go to the house 
				- Once the player touches the house with all 3 keys, they win the game 
		- Added the count of keys that the player has collected to the HUD in the lower right corner 
		- Edited the README to reflect the above changes 

</details>

<details>
	<summary>CL-000005 (The End Game Update)</summary>

	- Made the following changes: 
		- Created the end game conditions 
			- To win the game, the player has to do the following: 
				- Collect all 3 keys 
				- Once the player has all 3 keys, the player must go to the house 
				- Once the player touches the house with all 3 keys, they win the game 
		- Added the count of keys that the player has collected to the HUD in the lower right corner 
		- Edited the README to reflect the above changes 

</details>

<details>
	<summary>CL-000004 (The Menus Update)</summary>

	- Made the following changes: 
		- Added Controls Menu 
		- Added Credits Menu 
		- Added Main Menu 
		- Edited the README to reflect the above changes 

</details>

<details>
	<summary>CL-000003 (The Death Update)</summary>

	- Made the following changes: 
		- Fixed bug where enemies would sometimes go flying and take extra damage if the player was running while attacking 
		- Added the player's death sprites 
		- Added player death system 
			- When the player's health reaches 0, the player's death will trigger: 
				- The player's death animation will play 
				- The camera will zoom in on them slightly 
				- The world will pause and the death screen will appear 
					- The death screen has three options: 
						- Retry 
							- Reloads the level 
						- Main Menu button 
							- Currently non-functioning 
						- Deakstop  button 
							- Closes the app 
		- Made a health pickup 
			- Activated when the player walks up to it 
				- The player will get healed by one heart 
				- Then it will be destroyed 
		- Created the Pause Menu 
			- The player can press the 'Esc." or 'P' keys to pause the game 
			- The menu has three buttons 
				- Continue button
					- Continues the game when pressed 
				- Main Menu button 
					- Currently non-functioning 
				- Desktop button 
					- Closes the app 
		- Edited the README to reflect the above changes 

</details>

<details>
	<summary>CL-000002 (The Enemy Update)</summary>

	- Made the following changes: 
		- Removed that effect where the scene would get brighter in darker spots 
			- Did this by doing two things: 
				- In the camera, I went to Post Process > Lens > Exposure > Metering Mode > Manual then set Exposure Compensation to 10.5 
				- In the editor, I went to Show > Post Processing > Eye Adaption and toggles it off 
		- Made a DefaultEnemy class 
			- Using the Slime sprite made by rvos 
				- The same person who made the player character sprite 
			- The default enemy will idle until the player is nearby 
				- Nearby is considered within 400 units 
			- If the player is nearby, the Default Enemy will rush at the player 
			- If the enemy is within 180 units of the player, it will do it's attack 
		- Added health system to the player 
			- The player now has an int for health 
			- The max health is set to 3 
			- Currently nothing happens when the player reaches 0 health, will fix this in the future 
		- Added a HUD 
			- The HUD displays the player's health in the top left corner 
				- The health is Zelda-inspred with three hearts 
					- If the player takes damage, one of the heart containers will be empty 
		- Added art for the player's health 
			- Made by Comixtrash on itch.io 
		- Created the player's attack 
			- When the player presses 'L', they will swing their sword and deal damage 
		- Added Comixtrash to the credits section of the README 
		- Added a link to the Trello board the Specs section of the README 
		- Edited the README to reflect the above changes 

</details>

<details>
	<summary>CL-000001 (The Soft Collision Update)</summary>

	- Made the following changes: 
		- Changed the level somewhat 
			- Added some platforming challenges and some soft collisions 
		- Made a Soft Collision 
			- You can land on a soft collision 
			- You can jump up through a soft collision 
			- You can hold the Shift key and press the S key to fall through a soft collision 
		- Made it so that when the player falls the falling animation will play 
			- Even if the player didn't jump first 
		- Added falling sprites 
		- Edited the falling animation so that it plays the falling sprites 
		- Removed the StarterContend folder 
			- Wasn't going to use any of it anyways 
		- Changed the folder structure a little bit 
		- Edited the README to reflect the above changes

</details>


<details>
	<summary>CL-000000 (First!) </summary>

	- Made the following changes: 
		- Added The base project 
		- Added player character sprite to the project 
			- Set the idle animation to the new sprite 
			- Set the running animation to the new sprite 
			- Set the jumping animation to the new sprite 
			- Set the falling animation to the new sprite 
		- Added environment art sprites to the projcet 
			- Created a spritesheet for the environment art sprites 
			- Created a timemap for the spritesheet 
		- Started some basic level design 
		- Changed the way that movement works in code 
			- Before, when the character is moving at all, the animation would change to the running animation 
				- Now that change will only occur while the character is not mid-jump and only checks for the x-axis movement 
			- Now it checks if the player is jumping or has just jumped 
				- If they have, it will switch to the jumping animation instead 
				- Once the player's vertical velocity changes to negaative, it'll change to the falling sprite 
		- Edited the README to reflect the above changes

</details>
