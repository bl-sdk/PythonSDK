#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_LevelLoaded()
{
    class_< USeqEvent_LevelLoaded, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_LevelLoaded", no_init)
        .def("StaticClass", &USeqEvent_LevelLoaded::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqEvent_LevelLoaded::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}