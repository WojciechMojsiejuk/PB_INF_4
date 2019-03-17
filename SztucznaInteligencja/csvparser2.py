import pandas as pd
df = pd.read_csv("in.csv")
df.loc[df['Ile wynosi średni czas dotarcia przez ciebie na uczelnię?'] == '<0,5) minut','Ile wynosi średni czas dotarcia przez ciebie na uczelnię?']=0
df.loc[df['Ile wynosi średni czas dotarcia przez ciebie na uczelnię?'] == '<5,15) minut','Ile wynosi średni czas dotarcia przez ciebie na uczelnię?']=0.25
df.loc[df['Ile wynosi średni czas dotarcia przez ciebie na uczelnię?'] == '<15,30) minut','Ile wynosi średni czas dotarcia przez ciebie na uczelnię?']=0.5
df.loc[df['Ile wynosi średni czas dotarcia przez ciebie na uczelnię?'] == '<30,45) minut','Ile wynosi średni czas dotarcia przez ciebie na uczelnię?']=0.75
df.loc[df['Ile wynosi średni czas dotarcia przez ciebie na uczelnię?'] == '<45,∞) minut','Ile wynosi średni czas dotarcia przez ciebie na uczelnię?']=1

df.loc[df['Którego dnia tygodnia odbywa się wykład?'] == 'Poniedziałek','Którego dnia tygodnia odbywa się wykład?']=0
df.loc[df['Którego dnia tygodnia odbywa się wykład?'] == 'Wtorek','Którego dnia tygodnia odbywa się wykład?']=0.25
df.loc[df['Którego dnia tygodnia odbywa się wykład?'] == 'Środa','Którego dnia tygodnia odbywa się wykład?']=0.5
df.loc[df['Którego dnia tygodnia odbywa się wykład?'] == 'Czwartek','Którego dnia tygodnia odbywa się wykład?']=0.75
df.loc[df['Którego dnia tygodnia odbywa się wykład?'] == 'Piątek','Którego dnia tygodnia odbywa się wykład?']=1

df.loc[df['O której godzinie rozpoczyna się wykład?'] == 'ok. 8:00','O której godzinie rozpoczyna się wykład?']=0
df.loc[df['O której godzinie rozpoczyna się wykład?'] == 'ok. 10:00','O której godzinie rozpoczyna się wykład?']=0.2
df.loc[df['O której godzinie rozpoczyna się wykład?'] == 'ok. 12:00','O której godzinie rozpoczyna się wykład?']=0.4
df.loc[df['O której godzinie rozpoczyna się wykład?'] == 'ok. 14:00','O której godzinie rozpoczyna się wykład?']=0.6
df.loc[df['O której godzinie rozpoczyna się wykład?'] == 'ok. 16:00','O której godzinie rozpoczyna się wykład?']=0.8
df.loc[df['O której godzinie rozpoczyna się wykład?'] == 'ok. 18:00','O której godzinie rozpoczyna się wykład?']=1

df.loc[df['Ile godzin spałeś/aś w dniu poprzedzającym wykład'] == '<0,2) h','Ile godzin spałeś/aś w dniu poprzedzającym wykład']=0
df.loc[df['Ile godzin spałeś/aś w dniu poprzedzającym wykład'] == '<2,4) h','Ile godzin spałeś/aś w dniu poprzedzającym wykład']=0.2
df.loc[df['Ile godzin spałeś/aś w dniu poprzedzającym wykład'] == '<4,6) h','Ile godzin spałeś/aś w dniu poprzedzającym wykład']=0.4
df.loc[df['Ile godzin spałeś/aś w dniu poprzedzającym wykład'] == '<6,8) h','Ile godzin spałeś/aś w dniu poprzedzającym wykład']=0.6
df.loc[df['Ile godzin spałeś/aś w dniu poprzedzającym wykład'] == '<8,10) h','Ile godzin spałeś/aś w dniu poprzedzającym wykład']=0.8
df.loc[df['Ile godzin spałeś/aś w dniu poprzedzającym wykład'] == '<10,∞) h','Ile godzin spałeś/aś w dniu poprzedzającym wykład']=1

df.loc[df['Czy pojawiłeś się na danym wykładzie?'] == 'Nie','Czy pojawiłeś się na danym wykładzie?']=0
df.loc[df['Czy pojawiłeś się na danym wykładzie?'] == 'Tak','Czy pojawiłeś się na danym wykładzie?']=1


df = df.drop('Sygnatura czasowa', axis=1)
print(df)
df.to_csv('out.csv',index=False,header=False)

'''
HEADER:
Sygnatura czasowa,Ile wynosi średni czas dotarcia przez ciebie na uczelnię?,Którego dnia tygodnia odbywa się wykład?,O której godzinie rozpoczyna się wykład?,Ile godzin spałeś/aś w dniu poprzedzającym wykład,Czy pojawiłeś się na danym wykładzie?
'''
