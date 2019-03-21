#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetVectorComponents()
{
    class_< USeqAct_SetVectorComponents, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetVectorComponents", no_init)
        .def_readwrite("OutVector", &USeqAct_SetVectorComponents::OutVector)
        .def_readwrite("X", &USeqAct_SetVectorComponents::X)
        .def_readwrite("Y", &USeqAct_SetVectorComponents::Y)
        .def_readwrite("Z", &USeqAct_SetVectorComponents::Z)
        .def("StaticClass", &USeqAct_SetVectorComponents::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}