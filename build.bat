cl /c main.c /Fo:a.obj /DEBUG /Z7 /fsanitize=address
link a.obj /OUT:a.exe /DEBUG
