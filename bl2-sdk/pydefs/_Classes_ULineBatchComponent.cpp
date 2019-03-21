#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULineBatchComponent()
{
    class_< ULineBatchComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("ULineBatchComponent", no_init)
        .def_readwrite("FPrimitiveDrawInterfaceVfTable", &ULineBatchComponent::FPrimitiveDrawInterfaceVfTable)
        .def_readwrite("FPrimitiveDrawInterfaceView", &ULineBatchComponent::FPrimitiveDrawInterfaceView)
        .def_readwrite("BatchedLines", &ULineBatchComponent::BatchedLines)
        .def_readwrite("BatchedPoints", &ULineBatchComponent::BatchedPoints)
        .def_readwrite("DefaultLifeTime", &ULineBatchComponent::DefaultLifeTime)
        .def("StaticClass", &ULineBatchComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}