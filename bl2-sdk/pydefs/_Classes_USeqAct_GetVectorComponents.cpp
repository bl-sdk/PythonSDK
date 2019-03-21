#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_GetVectorComponents()
{
    class_< USeqAct_GetVectorComponents, bases< USequenceAction >  , boost::noncopyable>("USeqAct_GetVectorComponents", no_init)
        .def_readwrite("InVector", &USeqAct_GetVectorComponents::InVector)
        .def_readwrite("X", &USeqAct_GetVectorComponents::X)
        .def_readwrite("Y", &USeqAct_GetVectorComponents::Y)
        .def_readwrite("Z", &USeqAct_GetVectorComponents::Z)
        .def("StaticClass", &USeqAct_GetVectorComponents::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}