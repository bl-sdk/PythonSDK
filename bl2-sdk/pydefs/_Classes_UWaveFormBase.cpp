#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWaveFormBase()
{
    class_< UWaveFormBase, bases< UObject >  , boost::noncopyable>("UWaveFormBase", no_init)
        .def_readwrite("TheWaveForm", &UWaveFormBase::TheWaveForm)
        .def("StaticClass", &UWaveFormBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}