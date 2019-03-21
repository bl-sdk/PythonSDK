#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ReleaseTeleporterHeldLevel()
{
    class_< UWillowSeqAct_ReleaseTeleporterHeldLevel, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_ReleaseTeleporterHeldLevel", no_init)
        .def("StaticClass", &UWillowSeqAct_ReleaseTeleporterHeldLevel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}