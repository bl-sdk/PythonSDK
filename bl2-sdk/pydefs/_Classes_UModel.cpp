#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UModel()
{
    class_< UModel, bases< UObject >  , boost::noncopyable>("UModel", no_init)
        .def_readonly("UnknownData00", &UModel::UnknownData00)
        .def("StaticClass", &UModel::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}