#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMetaData()
{
    class_< UMetaData, bases< UObject >  , boost::noncopyable>("UMetaData", no_init)
        .def_readonly("UnknownData00", &UMetaData::UnknownData00)
        .def("StaticClass", &UMetaData::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}