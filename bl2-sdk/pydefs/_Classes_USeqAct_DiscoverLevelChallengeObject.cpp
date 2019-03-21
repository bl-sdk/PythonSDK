#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_DiscoverLevelChallengeObject()
{
    class_< USeqAct_DiscoverLevelChallengeObject, bases< USequenceAction >  , boost::noncopyable>("USeqAct_DiscoverLevelChallengeObject", no_init)
        .def_readwrite("LevelChallengeObject", &USeqAct_DiscoverLevelChallengeObject::LevelChallengeObject)
        .def("StaticClass", &USeqAct_DiscoverLevelChallengeObject::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}