#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_RandomSwitch()
{
    class_< USeqAct_RandomSwitch, bases< USequenceAction >  , boost::noncopyable>("USeqAct_RandomSwitch", no_init)
        .def_readwrite("AutoDisabledIndices", &USeqAct_RandomSwitch::AutoDisabledIndices)
        .def_readwrite("LinkCount", &USeqAct_Switch::LinkCount)
        .def_readwrite("IncrementAmount", &USeqAct_Switch::IncrementAmount)
        .def_readwrite("Indices", &USeqAct_Switch::Indices)
        .def("StaticClass", &USeqAct_RandomSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_RandomSwitch::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}