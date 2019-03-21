#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_Switch()
{
    class_< USeqAct_Switch, bases< USequenceAction >  , boost::noncopyable>("USeqAct_Switch", no_init)
        .def_readwrite("LinkCount", &USeqAct_Switch::LinkCount)
        .def_readwrite("IncrementAmount", &USeqAct_Switch::IncrementAmount)
        .def_readwrite("Indices", &USeqAct_Switch::Indices)
        .def("StaticClass", &USeqAct_Switch::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}