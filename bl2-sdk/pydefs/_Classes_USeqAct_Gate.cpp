#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_Gate()
{
    class_< USeqAct_Gate, bases< USequenceAction >  , boost::noncopyable>("USeqAct_Gate", no_init)
        .def_readwrite("AutoCloseCount", &USeqAct_Gate::AutoCloseCount)
        .def_readwrite("CurrentCloseCount", &USeqAct_Gate::CurrentCloseCount)
        .def("StaticClass", &USeqAct_Gate::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}