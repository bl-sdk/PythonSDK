#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_External()
{
    class_< USeqVar_External, bases< USequenceVariable >  , boost::noncopyable>("USeqVar_External", no_init)
        .def_readwrite("ExpectedType", &USeqVar_External::ExpectedType)
        .def_readwrite("VariableLabel", &USeqVar_External::VariableLabel)
        .def("StaticClass", &USeqVar_External::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}