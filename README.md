# AirBnB clone - The console

The goal of the project is to deploy on a server a simple copy of the AirBnB website. It won’t implement all the features, only some of them to cover all fundamental concepts of the higher level programming track.

# First step: Write a command interpreter to manage your AirBnB objects.

This first step is very important because it will use what you build during this project with all other following projects: HTML/CSS templating, database storage, API, front-end in

The AirBnB console is a command interpreter which acts like a minishell, and works in interactive and non-interactive mode.  

# How to Start the program:
Use the following command to start the program: ./console.py

# Commands:
create - create an object
show - show an object (based on id)
destroy - destroy an object
all - show all objects, of one type or all types
update - Updates an instance based on the class name and id
quit/EOF - quit the console
help - see descriptions of commands

## Create
To create an object use format "create " ex:
'''
(hbnb) create BaseModel
'''
## Show
To show an instance based on the class name and id. Ex:
'''
(hbnb) show BaseModel 1234-1234-1234.
'''
## Destroy
To Delete an instance of an object use "destroy id". Ex:
'''
(hbnb) destroy BaseModel 1234-1234-1234.
'''
## All
all or all Ex:
'''
(hbnb) all or all State
'''
## Update
Updates an instance based on the class name and id:

  (hbnb) update BaseModel 1234-1234-1234 email "aibnb@holbertonschool.com"

## Quit
quit or EOF

## Help
help or help Ex:
'''
(hbnb) help or help quit

Defines quit option
(hbnb) 
'''
