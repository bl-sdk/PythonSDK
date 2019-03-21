#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FChallengeData()
{
    class_< FChallengeData >("FChallengeData", no_init)
        .def_readwrite("PCOwner", &FChallengeData::PCOwner)
        .def_readwrite("ChallengeDefinition", &FChallengeData::ChallengeDefinition)
  ;
}