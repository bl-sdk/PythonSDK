#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimTree()
{
    class_< UWillowAnimTree, bases< UAnimTree >  , boost::noncopyable>("UWillowAnimTree", no_init)
        .def_readwrite("SimpleAnimNames", &UWillowAnimTree::SimpleAnimNames)
        .def_readwrite("PreviewWeapon", &UWillowAnimTree::PreviewWeapon)
        .def_readwrite("LeftHandAnimation", &UWillowAnimTree::LeftHandAnimation)
        .def("StaticClass", &UWillowAnimTree::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}