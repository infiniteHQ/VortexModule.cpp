#pragma once
#include "../../../lib/vortex/main/include/vortex.h"
#include "../../../lib/vortex/main/include/vortex_internals.h"
#include "../../../lib/vortex/lib/cherry/kit/v1/components/buttons/image_buttons.hpp"
#include "../../../lib/vortex/lib/cherry/kit/v1/components/buttons/image_text_buttons.hpp"
#include "../../../lib/vortex/lib/cherry/kit/v1/components/buttons/dropdown_buttons.hpp"

#ifndef UI_HPP
#define UI_HPP

using namespace Cherry;

class SampleAppWindow : public std::enable_shared_from_this<SampleAppWindow>
{
public:
    SampleAppWindow(const std::string &name);

    void OnImGuiRender();
    void menubar();

    std::shared_ptr<Cherry::AppWindow> &GetAppWindow();
    static std::shared_ptr<SampleAppWindow> Create(const std::string &name);
    void SetupRenderCallback();
    void Render();

private:
    VxContext *ctx;
    bool opened;
    std::shared_ptr<AppWindow> m_AppWindow;
};

#endif // LOGUTILITY_H
