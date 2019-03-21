#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_GFxMovieRegister()
{
    class_< UBehavior_GFxMovieRegister, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_GFxMovieRegister", no_init)
        .def_readwrite("MovieDefinition", &UBehavior_GFxMovieRegister::MovieDefinition)
        .def_readwrite("MeshComponentInstanceDataName", &UBehavior_GFxMovieRegister::MeshComponentInstanceDataName)
        .def_readwrite("RegisteredDefinition", &UBehavior_GFxMovieRegister::RegisteredDefinition)
        .def("StaticClass", &UBehavior_GFxMovieRegister::StaticClass, return_value_policy< reference_existing_object >())
        .def("ResolveController", &UBehavior_GFxMovieRegister::ResolveController, return_value_policy< reference_existing_object >())
        .def("RegisterMovie", &UBehavior_GFxMovieRegister::RegisterMovie)
        .def("ApplyBehaviorToContext", &UBehavior_GFxMovieRegister::ApplyBehaviorToContext)
        .def("RemoveFromroot", &UBehavior_GFxMovieRegister::RemoveFromroot)
        .def("AddToRoot", &UBehavior_GFxMovieRegister::AddToRoot)
        .staticmethod("StaticClass")
  ;
}