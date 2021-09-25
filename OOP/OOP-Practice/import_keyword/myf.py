def myfunc(a):
    a['mad'] = 'ok'

a = {
    'get':123
}
print(id(a))
a['mad'] = 'ok'
print(id(a))