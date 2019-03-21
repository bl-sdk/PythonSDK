#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ProceduralSwitch()
{
    class_< USeqAct_ProceduralSwitch, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ProceduralSwitch", no_init)
        .def_readwrite("Possibilities", &USeqAct_ProceduralSwitch::Possibilities)
        .def("StaticClass", &USeqAct_ProceduralSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}