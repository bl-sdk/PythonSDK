#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimMetaData()
{
    class_< UAnimMetaData, bases< UObject >  , boost::noncopyable>("UAnimMetaData", no_init)
        .def("StaticClass", &UAnimMetaData::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}