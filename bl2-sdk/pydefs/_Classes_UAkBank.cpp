#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAkBank()
{
    class_< UAkBank, bases< UAkObject >  , boost::noncopyable>("UAkBank", no_init)
        .def_readwrite("NumAsyncLoaders", &UAkBank::NumAsyncLoaders)
        .def("StaticClass", &UAkBank::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}