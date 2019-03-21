#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_Vector()
{
    class_< USeqVar_Vector, bases< USequenceVariable >  , boost::noncopyable>("USeqVar_Vector", no_init)
        .def_readwrite("VectValue", &USeqVar_Vector::VectValue)
        .def("StaticClass", &USeqVar_Vector::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}