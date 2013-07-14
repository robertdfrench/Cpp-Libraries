#! /bin/bash
#############################
##
##  File:
##      \file test-build.sh
##
##  Description:
##      \brief Test Build Script
##
##  Author:
##      \author J. Caleb Wherry
##
#############################

# Project name:
PROJ="Cpp-Libraries"
FULL_PROJ="calebwherry/"${PROJ}

# Logfile name:
LOGFILE=log.txt

# Status code from operations:
STATUS=0

# Clone the git repo for the nightly build:
echo -n "Cloning git project ${FULL_PROJ}... "
(
git clone git@github.com:${FULL_PROJ}.git
) >> ${LOGFILE} 2>&1
STATUS=$?

if [ ${STATUS} -ne 0 ]
then
    echo "** ERROR: Could not clone project, please check ${LOGFILE}. **"
    exit 1
else
    echo "done."
fi

# CD into new repo:
cd ${PROJ}

# Run make:
echo -n "Running make... "
(
make
) >> ${LOGFILE} 2>&1
STATUS=$?

if [ ${STATUS} -ne 0 ]
then
    echo "** ERROR: Make problem encountered, please check ${LOGFILE}. **"
    exit 1
else
    echo "done."
fi

# Run make test:
echo -n "Running make test... "
(
make test
) >> ${LOGFILE} 2>&1
STATUS=$?

if [ ${STATUS} -ne 0 ]
then
    echo "** ERROR: Make test problem encountered, please check ${LOGFILE}. **"
    exit 1
else
    echo "done."
fi

# Run project tests:
echo -n "Running make run-test... "
(
make run-test
) >> ${LOGFILE} 2>&1
STATUS=$?

if [ ${STATUS} -ne 0 ]
then
    echo "** ERROR: make run-test problem encountered, please check ${LOGFILE} for test failures. **"
    exit 1
else
    echo "done."
fi

# All test okay:
echo "All test completed successfully!"

# Do some cleanup:
cd ..
rm -rf ${PROJ} ${LOGFILE}

# Exit cleanly:
exit 0
