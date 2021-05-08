# ProjectPraeter

*A Basic 2D Platformer*

## Specs

Unreal Engine 4.25.4

SLN solution in Visual Studio Community 2019 Preview 
https://visualstudio.microsoft.com/vs/community/

## Credits 

**Programming**
- [Hunter Goodin](https://huntergoodin.com/)

**Art**
- [rvros](https://rvros.itch.io/)
- [Trixie](https://trixelized.itch.io/)

**Animation**
- [rvros](https://rvros.itch.io/)

## Changelist 

<details>
	<summary>CL-000000</summary>

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

</details>