import bl2sdk
import io
from contextlib import redirect_stdout

def describe(something):
    f = io.StringIO()
    with redirect_stdout(f):
        help(something)
    return f.getvalue()

def describe_without_uobject(something):
    s = describe(something).split('\n')
    uo = describe(bl2sdk.UObject).split('\n')
    output = []
    for line in s:
        if line not in uo:
            output.append(line)
    print('\n'.join(output))
