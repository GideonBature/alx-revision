# fabfile.py
"""A fabfile that runs commands on the server
"""
from fabric import Connection, task

@task
def gideon(c):
    """connect to remote server
    """
    # c = Connection('ubuntu@34.207.253.54')
    # Run command on the remote server
    c.run('echo "$USER"')
    c.run('ls -l')
    # c.run('sudo vim 1-install_load_balancer', pty=True)
    c.sudo('whoami')
    c.run('id -u root')
    result = c.put('text.txt', remote='/home/ubuntu/')
    print("Uploaded {0.local} to {0.remote}".format(result))
    result = c.get('/home/ubuntu/1-install_load_balancer')
    print("downloaded {0.local} from {0.remote}".format(result))
