#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_CoordinateOperations()
{
    class_< UWillowSeqAct_CoordinateOperations, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_CoordinateOperations", no_init)
        .def_readwrite("AllOperations", &UWillowSeqAct_CoordinateOperations::AllOperations)
        .def_readwrite("OperationsRemaining", &UWillowSeqAct_CoordinateOperations::OperationsRemaining)
        .def("StaticClass", &UWillowSeqAct_CoordinateOperations::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}