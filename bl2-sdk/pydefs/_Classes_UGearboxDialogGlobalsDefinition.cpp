#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogGlobalsDefinition()
{
    class_< UGearboxDialogGlobalsDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UGearboxDialogGlobalsDefinition", no_init)
        .def_readwrite("PitchRTPC", &UGearboxDialogGlobalsDefinition::PitchRTPC)
        .def_readwrite("Priorities", &UGearboxDialogGlobalsDefinition::Priorities)
        .def("StaticClass", &UGearboxDialogGlobalsDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}