#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGFxMovieDrawStyleInstanceData()
{
    class_< UGFxMovieDrawStyleInstanceData, bases< UGFxMovieDrawStyleRTT >  , boost::noncopyable>("UGFxMovieDrawStyleInstanceData", no_init)
        .def_readwrite("ComponentIDName", &UGFxMovieDrawStyleInstanceData::ComponentIDName)
        .def_readwrite("MatIndexName", &UGFxMovieDrawStyleInstanceData::MatIndexName)
        .def_readwrite("MatiSource", &UGFxMovieDrawStyleInstanceData::MatiSource)
        .def_readwrite("TextureParameterName", &UGFxMovieDrawStyleInstanceData::TextureParameterName)
        .def_readwrite("Component", &UGFxMovieDrawStyleInstanceData::Component)
        .def_readwrite("MaterialIndex", &UGFxMovieDrawStyleInstanceData::MaterialIndex)
        .def_readwrite("Mati", &UGFxMovieDrawStyleInstanceData::Mati)
        .def("StaticClass", &UGFxMovieDrawStyleInstanceData::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventRequiresClientInstance", &UGFxMovieDrawStyleInstanceData::eventRequiresClientInstance)
        .staticmethod("StaticClass")
  ;
}