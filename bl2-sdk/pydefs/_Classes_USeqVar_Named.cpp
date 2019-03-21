#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_Named()
{
    class_< USeqVar_Named, bases< USequenceVariable >  , boost::noncopyable>("USeqVar_Named", no_init)
        .def_readwrite("ExpectedType", &USeqVar_Named::ExpectedType)
        .def_readwrite("FindVarName", &USeqVar_Named::FindVarName)
        .def("StaticClass", &USeqVar_Named::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}