# ProjectPraeter

*A Basic 2D Platformer*

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
- [rvros](https://rvros.itch.io/)
- [Trixie](https://trixelized.itch.io/)
- [Comixtrash](https://comixtrash.itch.io/) 

**Animation**
- [rvros](https://rvros.itch.io/)

## Changelist 

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