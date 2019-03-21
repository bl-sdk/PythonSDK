#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqVar_Name()
{
    class_< USeqVar_Name, bases< USequenceVariable >  , boost::noncopyable>("USeqVar_Name", no_init)
        .def("StaticClass", &USeqVar_Name::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}