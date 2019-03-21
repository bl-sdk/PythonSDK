#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_AIProvoke()
{
    class_< UWillowSeqAct_AIProvoke, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_AIProvoke", no_init)
        .def_readwrite("Provoker", &UWillowSeqAct_AIProvoke::Provoker)
        .def("StaticClass", &UWillowSeqAct_AIProvoke::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}