#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UScene()
{
    class_< UScene, bases< UObject >  , boost::noncopyable>("UScene", no_init)
        .def("StaticClass", &UScene::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}