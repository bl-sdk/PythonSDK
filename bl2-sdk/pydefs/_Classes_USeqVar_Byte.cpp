#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_Byte()
{
    class_< USeqVar_Byte, bases< USequenceVariable >  , boost::noncopyable>("USeqVar_Byte", no_init)
        .def("StaticClass", &USeqVar_Byte::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}