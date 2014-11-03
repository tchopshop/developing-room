<?php
/**
 * @file
 * tchopshop_wysiwyg.features.inc
 */

/**
 * Implements hook_default_wysiwyg_profile().
 */
function tchopshop_wysiwyg_default_wysiwyg_profile() {
  $items = array();
  $items['admin'] = entity_import('wysiwyg_profile', '{
    "format" : "admin",
    "editor" : "ckeditor",
    "settings" : {
      "default" : 1,
      "user_choose" : 0,
      "show_toggle" : 1,
      "theme" : "advanced",
      "language" : "en",
      "extensions" : [],
      "toolbar" : [
        [
          [
            { "button" : "Bold", "plugin" : "default" },
            { "button" : "Italic", "plugin" : "default" },
            { "button" : "JustifyLeft", "plugin" : "default" },
            { "button" : "JustifyRight", "plugin" : "default" },
            { "button" : "JustifyCenter", "plugin" : "default" },
            { "button" : "BulletedList", "plugin" : "default" },
            { "button" : "NumberedList", "plugin" : "default" },
            { "button" : "Outdent", "plugin" : "default" },
            { "button" : "Indent", "plugin" : "default" },
            { "button" : "Blockquote", "plugin" : "default" },
            { "button" : "Link", "plugin" : "default" },
            { "button" : "Anchor", "plugin" : "default" },
            { "button" : "Image", "plugin" : "default" },
            { "button" : "TextColor", "plugin" : "default" },
            { "button" : "Superscript", "plugin" : "default" },
            { "button" : "SpecialChar", "plugin" : "default" },
            { "button" : "HorizontalRule", "plugin" : "default" }
          ]
        ],
        [
          [
            { "button" : "linebreaks", "plugin" : "drupal" },
            { "button" : "Source", "plugin" : "default" },
            { "button" : "RemoveFormat", "plugin" : "default" },
            { "button" : "PasteFromWord", "plugin" : "default" },
            { "button" : "Format", "plugin" : "default" },
            { "button" : "Styles", "plugin" : "default" },
            { "button" : "Table", "plugin" : "default" },
            { "button" : "Scayt", "plugin" : "default" },
            { "button" : "OCUpload", "plugin" : "OCUpload" },
            { "button" : "video_filter", "plugin" : "video_filter" },
            { "button" : "break", "plugin" : "drupal" }
          ]
        ]
      ],
      "toolbar_loc" : "top",
      "toolbar_align" : "left",
      "path_loc" : "bottom",
      "resizing" : 1,
      "verify_html" : 1,
      "preformatted" : 0,
      "convert_fonts_to_spans" : 1,
      "remove_linebreaks" : 1,
      "apply_source_formatting" : 1,
      "paste_auto_cleanup_on_paste" : 1,
      "block_formats" : "p,h2,h3,h4,h5,h6,div",
      "css_setting" : "theme",
      "css_path" : "",
      "css_classes" : "Align image left=img.image-left\\r\\nAlign image right=img.image-right\\r\\nCenter image no wrap=img.image-center"
    },
    "rdf_mapping" : []
  }');
  $items['basic'] = entity_import('wysiwyg_profile', '{
    "format" : "basic",
    "editor" : "ckeditor",
    "settings" : {
      "default" : 1,
      "user_choose" : 0,
      "show_toggle" : 0,
      "theme" : "advanced",
      "language" : "en",
      "extensions" : [],
      "toolbar" : [
        [
          [
            { "button" : "Bold", "plugin" : "default" },
            { "button" : "Italic", "plugin" : "default" },
            { "button" : "Blockquote", "plugin" : "default" },
            { "button" : "BulletedList", "plugin" : "default" },
            { "button" : "NumberedList", "plugin" : "default" },
            { "button" : "Link", "plugin" : "default" },
            { "button" : "linebreaks", "plugin" : "drupal" }
          ]
        ]
      ],
      "toolbar_loc" : "top",
      "toolbar_align" : "left",
      "path_loc" : "bottom",
      "resizing" : 1,
      "verify_html" : 1,
      "preformatted" : 0,
      "convert_fonts_to_spans" : 1,
      "remove_linebreaks" : 0,
      "apply_source_formatting" : 1,
      "paste_auto_cleanup_on_paste" : 1,
      "block_formats" : "p,h2,h3,h4,h5,h6,div",
      "css_setting" : "theme",
      "css_path" : "",
      "css_classes" : ""
    },
    "rdf_mapping" : []
  }');
  $items['standard'] = entity_import('wysiwyg_profile', '{
    "format" : "standard",
    "editor" : "ckeditor",
    "settings" : {
      "default" : 1,
      "user_choose" : 0,
      "show_toggle" : 0,
      "theme" : "advanced",
      "language" : "en",
      "extensions" : [],
      "toolbar" : [
        [
          [
            { "button" : "Bold", "plugin" : "default" },
            { "button" : "Italic", "plugin" : "default" },
            { "button" : "BulletedList", "plugin" : "default" },
            { "button" : "NumberedList", "plugin" : "default" },
            { "button" : "Blockquote", "plugin" : "default" },
            { "button" : "Outdent", "plugin" : "default" },
            { "button" : "Indent", "plugin" : "default" },
            { "button" : "Link", "plugin" : "default" },
            { "button" : "Unlink", "plugin" : "default" },
            { "button" : "HorizontalRule", "plugin" : "default" },
            { "button" : "PasteFromWord", "plugin" : "default" },
            { "button" : "RemoveFormat", "plugin" : "default" },
            { "button" : "Scayt", "plugin" : "default" },
            { "button" : "linebreaks", "plugin" : "drupal" },
            { "button" : "Format", "plugin" : "default" },
            { "button" : "Styles", "plugin" : "default" },
            { "button" : "OCUpload", "plugin" : "OCUpload" },
            { "button" : "video_filter", "plugin" : "video_filter" },
            { "button" : "break", "plugin" : "drupal" }
          ]
        ]
      ],
      "toolbar_loc" : "top",
      "toolbar_align" : "left",
      "path_loc" : "bottom",
      "resizing" : 1,
      "verify_html" : 1,
      "preformatted" : 0,
      "convert_fonts_to_spans" : 1,
      "remove_linebreaks" : 1,
      "apply_source_formatting" : 0,
      "paste_auto_cleanup_on_paste" : 1,
      "block_formats" : "p,h2,h3,h4,h5,h6,div",
      "css_setting" : "theme",
      "css_path" : "",
      "css_classes" : "Align image left=img.image-left\\r\\nAlign image right=img.image-right\\r\\nCenter image no wrap=img.image-center"
    },
    "rdf_mapping" : []
  }');
  return $items;
}
