#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTI_Calc()
{
    class_< UTI_Calc, bases< UObject >  , boost::noncopyable>("UTI_Calc", no_init)
        .def_readwrite("IteratorType", &UTargetIterator::IteratorType)
        .def_readwrite("BarGraphShortName", &UTargetIterator::BarGraphShortName)
        .def("StaticClass", &UTI_Calc::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventRecordEvalCallback", &UTargetIterator::eventRecordEvalCallback)
        .staticmethod("StaticClass")
  ;
}