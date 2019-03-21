#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUnloadableDlcChallengeData()
{
    class_< FUnloadableDlcChallengeData >("FUnloadableDlcChallengeData", no_init)
        .def_readwrite("ChallengeDefName", &FUnloadableDlcChallengeData::ChallengeDefName)
        .def_readwrite("DlcPackageId", &FUnloadableDlcChallengeData::DlcPackageId)
  ;
}