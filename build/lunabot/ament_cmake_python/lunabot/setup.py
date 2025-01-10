from setuptools import find_packages
from setuptools import setup

setup(
    name='lunabot',
    version='0.1.0',
    packages=find_packages(
        include=('lunabot', 'lunabot.*')),
)
