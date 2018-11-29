#python adventure game
#Escape NIC

import time
import random

def main():

	print ("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
	print ("Welcome to Escape from NIC!")
	print ("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")

	time.sleep(3)

	print("\nYou wake up in the Student Union Building of NIC, dazed and "
		"confused. You apper to have a backpack on.\n")
	i = input("")
	if(i == 'open backpack'):
		print("\nYou have a bottle of water, a phone with an "
			"unread message, and a pencil.\n")
		time.sleep(2)
	else: print("EXCUSE ME?\n")
	
main()