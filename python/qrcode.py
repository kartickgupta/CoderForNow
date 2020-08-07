import qrcode
f = qrcode.create(f'https://www.geeksforgeeks.org/c-classes-and-objects/')
f.save('qr.png')