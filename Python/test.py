daughters={
    'Aris':{
        'favorite':'games',
        'eyes':'blue',
        },
    'Klee':{
        'favorite':'adventrue',
        'eyes':'red',
        },
    }
for daughter_names ,informations in daughters.items():
    print('\nDaughter_name:'+daughter_names)
    information=informations['favorite']
    print('\nDaughter_favorite:'+information)
