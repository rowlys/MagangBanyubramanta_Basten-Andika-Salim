from setuptools import find_packages
from setuptools import setup

setup(
    name='tugas_opencv',
    version='0.0.0',
    packages=find_packages(
        include=('tugas_opencv', 'tugas_opencv.*')),
)
