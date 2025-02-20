n = int(input().strip())

for _ in range(n):
    date_str = input().strip()
    
    if '.' in date_str: 
        day, month, year = date_str.split('.')
    else: 
        month, day, year = date_str.split('/')
    

    dd_mm_yyyy = f"{day.zfill(2)}.{month.zfill(2)}.{year.zfill(4)}"
    mm_dd_yyyy = f"{month.zfill(2)}/{day.zfill(2)}/{year.zfill(4)}"
    

    print(dd_mm_yyyy, mm_dd_yyyy)
