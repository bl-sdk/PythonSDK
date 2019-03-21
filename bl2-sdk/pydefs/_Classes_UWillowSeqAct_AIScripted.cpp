#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AIScripted()
{
    class_< UWillowSeqAct_AIScripted, bases< USeqAct_Latent >  , boost::noncopyable>("UWillowSeqAct_AIScripted", no_init)
        .def_readwrite("LookAt", &UWillowSeqAct_AIScripted::LookAt)
        .def_readwrite("Destination", &UWillowSeqAct_AIScripted::Destination)
        .def_readwrite("Stance", &UWillowSeqAct_AIScripted::Stance)
        .def_readwrite("FocusStyle", &UWillowSeqAct_AIScripted::FocusStyle)
        .def("StaticClass", &UWillowSeqAct_AIScripted::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}