#!/usr/bin/env bash

set -e

$1/.ci/common/linux-build.sh $1 $2
$1/.ci/common/finalize-rpm.sh $1 $2 "fc30"
