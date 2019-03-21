#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTargetIterator()
{
    class_< UTargetIterator, bases< UObject >  , boost::noncopyable>("UTargetIterator", no_init)
        .def_readwrite("IteratorType", &UTargetIterator::IteratorType)
        .def_readwrite("BarGraphShortName", &UTargetIterator::BarGraphShortName)
        .def("StaticClass", &UTargetIterator::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventRecordEvalCallback", &UTargetIterator::eventRecordEvalCallback)
        .staticmethod("StaticClass")
  ;
}