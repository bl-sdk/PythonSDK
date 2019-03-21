#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ProceduralSwitchNumeric()
{
    class_< USeqAct_ProceduralSwitchNumeric, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ProceduralSwitchNumeric", no_init)
        .def_readwrite("Possibilities", &USeqAct_ProceduralSwitchNumeric::Possibilities)
        .def("StaticClass", &USeqAct_ProceduralSwitchNumeric::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}